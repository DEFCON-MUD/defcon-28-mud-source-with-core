inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 8 }));
  set_short( "Corridor - x51y24z8" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y24z8.c",
  "north" : DIR+"/rooms/x51y25z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
