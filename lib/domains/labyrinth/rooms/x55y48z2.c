inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 2 }));
  set_short( "Corridor - x55y48z2" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y48z2.c",
  "south" : DIR+"/rooms/x55y47z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
