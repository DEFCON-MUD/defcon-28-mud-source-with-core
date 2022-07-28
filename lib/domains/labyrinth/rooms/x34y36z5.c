inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 36, 5 }));
  set_short( "Corridor - x34y36z5" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y36z5.c",
  "east" : DIR+"/rooms/x35y36z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
