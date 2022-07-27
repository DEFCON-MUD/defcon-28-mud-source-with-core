inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 5 }));
  set_short( "Passage - x41y54z5" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y54z5.c",
  "east" : DIR+"/rooms/x42y54z5.c",
  "south" : DIR+"/rooms/x41y53z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
