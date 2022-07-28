inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 0 }));
  set_short( "Passage - x21y52z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y52z0.c",
  "south" : DIR+"/rooms/x21y51z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
