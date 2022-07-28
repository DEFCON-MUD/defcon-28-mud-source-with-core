inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 57, 9 }));
  set_short( "Hallway - x41y57z9" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y58z9.c",
  "south" : DIR+"/rooms/x41y56z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
