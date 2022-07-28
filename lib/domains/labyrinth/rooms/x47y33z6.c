inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 6 }));
  set_short( "Hallway - x47y33z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z6.c",
  "south" : DIR+"/rooms/x47y32z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
