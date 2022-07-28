inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 2 }));
  set_short( "Hallway - x17y24z2" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y24z2.c",
  "east" : DIR+"/rooms/x18y24z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
