inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 41, 6 }));
  set_short( "Corridor - x45y41z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y42z6.c",
  "south" : DIR+"/rooms/x45y40z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
