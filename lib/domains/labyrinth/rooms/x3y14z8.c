inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 8 }));
  set_short( "Passage - x3y14z8" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z8.c",
  "east" : DIR+"/rooms/x4y14z8.c",
  "north" : DIR+"/rooms/x3y15z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
