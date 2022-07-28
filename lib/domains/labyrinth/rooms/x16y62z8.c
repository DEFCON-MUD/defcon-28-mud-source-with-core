inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 8 }));
  set_short( "Corridor - x16y62z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z8.c",
  "east" : DIR+"/rooms/x17y62z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
