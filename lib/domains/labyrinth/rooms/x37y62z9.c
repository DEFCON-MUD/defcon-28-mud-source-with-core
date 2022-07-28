inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 9 }));
  set_short( "Corridor - x37y62z9" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y62z9.c",
  "east" : DIR+"/rooms/x38y62z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
