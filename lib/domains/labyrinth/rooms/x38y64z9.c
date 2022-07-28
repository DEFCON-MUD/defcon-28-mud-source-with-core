inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 64, 9 }));
  set_short( "Corridor - x38y64z9" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y64z9.c",
  "east" : DIR+"/rooms/x39y64z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
