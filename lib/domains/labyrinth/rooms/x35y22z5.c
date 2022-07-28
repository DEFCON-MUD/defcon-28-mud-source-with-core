inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 5 }));
  set_short( "Hallway - x35y22z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y22z5.c",
  "east" : DIR+"/rooms/x36y22z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
