inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 6 }));
  set_short( "Hallway - x61y49z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z6.c",
  "south" : DIR+"/rooms/x61y48z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
