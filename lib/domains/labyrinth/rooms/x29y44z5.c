inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 5 }));
  set_short( "Passage - x29y44z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z5.c",
  "north" : DIR+"/rooms/x29y45z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
