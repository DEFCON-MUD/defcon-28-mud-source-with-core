inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 29, 48, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/banker.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/30_48_-7.c",
  "north" : DIR+"/rooms/29_47_-7.c"
  ]) );

}

