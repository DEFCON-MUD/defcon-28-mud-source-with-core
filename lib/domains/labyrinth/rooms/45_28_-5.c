inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 45, 28, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/46_28_-5.c",
  "north" : DIR+"/rooms/45_27_-5.c"
  ]) );

}

