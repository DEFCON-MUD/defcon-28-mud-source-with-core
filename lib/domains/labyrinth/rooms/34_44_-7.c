inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 34, 44, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/33_44_-7.c",
  "east" : DIR+"/rooms/35_44_-7.c"
  ]) );

}

