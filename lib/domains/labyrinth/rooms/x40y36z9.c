inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 36, 9 }));
  set_short( "Passage - x40y36z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y36z9.c",
  "east" : DIR+"/rooms/x41y36z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
