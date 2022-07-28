inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 7 }));
  set_short( "Passage - x49y2z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z7.c",
  "north" : DIR+"/rooms/x49y3z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
