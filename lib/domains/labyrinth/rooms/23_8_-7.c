inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 23, 8, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/23_9_-7.c",
  "north" : DIR+"/rooms/23_7_-7.c"
  ]) );

}

