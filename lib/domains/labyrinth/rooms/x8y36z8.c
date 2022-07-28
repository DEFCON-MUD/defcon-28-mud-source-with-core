inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 36, 8 }));
  set_short( "Hallway - x8y36z8" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y36z8.c",
  "east" : DIR+"/rooms/x9y36z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
