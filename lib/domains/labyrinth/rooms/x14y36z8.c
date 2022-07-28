inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 8 }));
  set_short( "Hallway - x14y36z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z8.c",
  "east" : DIR+"/rooms/x15y36z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
