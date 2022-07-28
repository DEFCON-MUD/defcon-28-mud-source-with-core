inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 22, 6 }));
  set_short( "Corridor - x34y22z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y22z6.c",
  "east" : DIR+"/rooms/x35y22z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
