inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 58, 6 }));
  set_short( "Passage - x17y58z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y58z6.c",
  "north" : DIR+"/rooms/x17y59z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
