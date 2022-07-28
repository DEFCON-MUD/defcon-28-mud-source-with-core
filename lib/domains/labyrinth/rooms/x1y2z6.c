inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 6 }));
  set_short( "Corridor - x1y2z6" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z6.c",
  "north" : DIR+"/rooms/x1y3z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
