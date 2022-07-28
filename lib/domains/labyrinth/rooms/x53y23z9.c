inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 23, 9 }));
  set_short( "Corridor - x53y23z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y24z9.c",
  "south" : DIR+"/rooms/x53y22z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
