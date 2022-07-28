inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 9 }));
  set_short( "Hallway - x37y64z9" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z9.c",
  "east" : DIR+"/rooms/x38y64z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
