inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 46, 8 }));
  set_short( "Hallway - x4y46z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y46z8.c",
  "east" : DIR+"/rooms/x5y46z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
