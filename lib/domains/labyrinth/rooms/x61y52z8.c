inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 8 }));
  set_short( "Hallway - x61y52z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z8.c",
  "south" : DIR+"/rooms/x61y51z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
