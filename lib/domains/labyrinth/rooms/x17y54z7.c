inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 7 }));
  set_short( "Passage - x17y54z7" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y54z7.c",
  "south" : DIR+"/rooms/x17y53z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
