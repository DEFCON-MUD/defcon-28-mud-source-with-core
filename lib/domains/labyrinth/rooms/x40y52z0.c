inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 52, 0 }));
  set_short( "Hallway - x40y52z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y52z0.c",
  "east" : DIR+"/rooms/x41y52z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
