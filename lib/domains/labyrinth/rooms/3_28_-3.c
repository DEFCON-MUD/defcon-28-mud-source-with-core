inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 3, 28, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/3_29_-3.c",
  "north" : DIR+"/rooms/3_27_-3.c"
  ]) );

}

