inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 21, 23, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/21_24_-1.c",
  "north" : DIR+"/rooms/21_22_-1.c"
  ]) );

}

