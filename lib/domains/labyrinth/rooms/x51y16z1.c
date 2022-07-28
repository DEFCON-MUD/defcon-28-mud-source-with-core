inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 1 }));
  set_short( "Passage - x51y16z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y16z1.c",
  "south" : DIR+"/rooms/x51y15z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
