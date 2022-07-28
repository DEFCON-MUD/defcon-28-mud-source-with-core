inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 2 }));
  set_short( "Passage - x49y48z2" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y48z2.c",
  "south" : DIR+"/rooms/x49y47z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
