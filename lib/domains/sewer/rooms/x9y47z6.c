inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 6 }));
  set_short( "Passage - x9y47z6" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z6.c",
  "south" : DIR+"/rooms/x9y46z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
