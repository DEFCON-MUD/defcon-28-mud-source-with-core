inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 59, 2 }));
  set_short( "Passage - x27y59z2" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y60z2.c",
  "south" : DIR+"/rooms/x27y58z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
