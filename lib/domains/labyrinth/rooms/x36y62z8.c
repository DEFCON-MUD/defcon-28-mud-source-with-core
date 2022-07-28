inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 62, 8 }));
  set_short( "Passage - x36y62z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y62z8.c",
  "east" : DIR+"/rooms/x37y62z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
