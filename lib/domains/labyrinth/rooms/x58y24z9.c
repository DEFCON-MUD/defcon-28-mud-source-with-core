inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 24, 9 }));
  set_short( "Corridor - x58y24z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y24z9.c",
  "east" : DIR+"/rooms/x59y24z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
