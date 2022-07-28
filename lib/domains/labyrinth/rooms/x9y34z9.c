inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 9 }));
  set_short( "Hallway - x9y34z9" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y34z9.c",
  "north" : DIR+"/rooms/x9y35z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
