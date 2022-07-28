inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 1 }));
  set_short( "Hallway - x36y64z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z1.c",
  "east" : DIR+"/rooms/x37y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
