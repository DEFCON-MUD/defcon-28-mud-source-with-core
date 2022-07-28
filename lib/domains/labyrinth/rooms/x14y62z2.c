inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 2 }));
  set_short( "Hallway - x14y62z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z2.c",
  "east" : DIR+"/rooms/x15y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
