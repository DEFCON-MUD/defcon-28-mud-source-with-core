inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 2 }));
  set_short( "Hallway - x3y55z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z2.c",
  "south" : DIR+"/rooms/x3y54z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
