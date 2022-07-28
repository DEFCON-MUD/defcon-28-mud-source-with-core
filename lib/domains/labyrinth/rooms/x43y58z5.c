inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 5 }));
  set_short( "Hallway - x43y58z5" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y58z5.c",
  "north" : DIR+"/rooms/x43y59z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
