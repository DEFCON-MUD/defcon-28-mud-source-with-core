inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 9 }));
  set_short( "Corridor - x13y22z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z9.c",
  "south" : DIR+"/rooms/x13y21z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
