inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 25, 20, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/professor.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/25_21_-5.c",
  "north" : DIR+"/rooms/25_19_-5.c"
  ]) );

}

