inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 7 }));
  set_short( "Passage - x14y64z7" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z7.c",
  "east" : DIR+"/rooms/x15y64z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
