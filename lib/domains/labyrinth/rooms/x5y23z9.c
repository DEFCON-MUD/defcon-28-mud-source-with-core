inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 23, 9 }));
  set_short( "Corridor - x5y23z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y24z9.c",
  "south" : DIR+"/rooms/x5y22z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
