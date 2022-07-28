inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 6 }));
  set_short( "Corridor - x37y62z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y62z6.c",
  "east" : DIR+"/rooms/x38y62z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
