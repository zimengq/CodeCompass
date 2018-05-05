from Get_Info import get_info_git as gt


def name_form(name):
    name_split = name.split()
    form = []

    if len(name_split) == 1:
        single_name = name_split[0]
        len_single = len(single_name)
        if len_single >= 3:
            form.append(single_name[0:3])
            form.append(single_name[len_single-3:len_single])
        else:
            form = single_name

    elif len(name_split) == 2:
        form.append(name_split[0].lower())
        form.append(name_split[1].lower())

    elif len(name_split) == 3:
        form.append(name_split[1].lower())
        form.append(name_split[0].lower())
        form.append(name_split[2].lower())

    else:
        form = name

    possible_name = [name]
    for username in form:
        possible_name.append(username)

    return possible_name

def possible_names(name,login):
    possible_name = [name,login]
    if not name == None:
        possible_name.extend(name_form(name))
    else:
        possible_name.extend(name_form(login))
    possible_name = gt.delete_duplicate(possible_name)
    return possible_name

