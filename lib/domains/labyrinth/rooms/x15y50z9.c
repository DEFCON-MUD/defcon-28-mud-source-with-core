inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 9 }));
  set_short( "Hallway - x15y50z9" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y50z9.c",
  "north" : DIR+"/rooms/x15y51z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
